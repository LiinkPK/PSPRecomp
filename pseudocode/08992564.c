/* Entry 0x08992564 | file offset 0x0018F53C | FUN_08992564 | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd3b4. Boundary still requires runtime validation. */

undefined4 FUN_08992564(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
    uVar1 = 0;
  }
  return uVar1;
}

