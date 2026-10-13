/* Entry 0x08828430 | file offset 0x00025408 | FUN_08828430 | bytes 32 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c76ec. Boundary still requires runtime validation. */

void FUN_08828430(int param_1)

{
  if (*(int *)(param_1 + 0x550) != 0) {
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(*(int *)(param_1 + 0x550) + 0x374);
  }
  return;
}

