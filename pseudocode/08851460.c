/* Entry 0x08851460 | file offset 0x0004E438 | FUN_08851460 | bytes 32 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8b1c. Boundary still requires runtime validation. */

void FUN_08851460(int param_1)

{
  if (*(int *)(param_1 + 0x5d4) != 0) {
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(*(int *)(param_1 + 0x5d4) + 0x374);
  }
  return;
}

