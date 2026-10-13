/* Entry 0x08931444 | file offset 0x0012E41C | FUN_08931444 | bytes 36 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cf17c. Boundary still requires runtime validation. */

bool FUN_08931444(int param_1)

{
  return *(char *)(*(int *)(param_1 + 0x34) + 0x2b) == '\0';
}

