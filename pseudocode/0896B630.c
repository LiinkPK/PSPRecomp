/* Entry 0x0896B630 | file offset 0x00168608 | FUN_0896b630 | bytes 32 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc544. Boundary still requires runtime validation. */

undefined4 FUN_0896b630(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

