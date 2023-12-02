#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * displayError - displays eror
 * @msg: message
 */
void displayError(const char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(98);
}

/**
 * displayInfo - displays info
 * @header: ELF header
 */
void displayInfo(Elf64_Ehdr *header)
{
	int i;

	printf(" Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
	printf("  Class:                          %s\n", header->e_ident[EI_CLASS] ==
			ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                           %s\n", header->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                        %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                         %s\n",
			header->e_ident[EI_OSABI] ==
			ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                    %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                           %s\n",
			header->e_type ==
			ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:            %#lx\n",
			(unsigned long)header->e_entry);
}

/**
 * main - entry point
 * @argc: No.of args
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elfHeader;

	if (argc != 2)
		displayError("Usafe: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		displayError("Error: Could not open the file");

	if (read(fd, &elfHeader, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		displayError("Error: Could not read ELF header");
	}

	if (elfHeader.e_ident[EI_MAG0]
			!= ELFMAG0 ||
			elfHeader.e_ident[EI_MAG1] != ELFMAG1 ||
			elfHeader.e_ident[EI_MAG2] != ELFMAG2 ||
			elfHeader.e_ident[EI_MAG3] != ELFMAG3)
		displayError("Erro: Not and ELF file");

	displayInfo(&elfHeader);

	if (close(fd) == -1)
		displayError("Error: Could not close the file");

	return (0);
}
