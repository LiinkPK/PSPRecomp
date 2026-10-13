/* Entry 0x08847CC0 | file offset 0x00044C98 | FUN_08847cc0 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8a6c. Boundary still requires runtime validation. */

undefined4 FUN_08847cc0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((**(char **)(*(int *)(param_1 + 4) + 0x30c) == param_2) &&
     (*(char *)(*(int *)(param_1 + 4) + 0xd60) == param_3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

