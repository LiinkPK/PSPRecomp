/* Entry 0x0892B8C8 | file offset 0x001288A0 | FUN_0892b8c8 | bytes 256 */

void FUN_0892b8c8(int param_1)

{
  undefined4 uVar1;
  undefined1 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  undefined4 uStackX_0;
  undefined4 uStackX_4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  undefined4 in_stack_00000010;
  
  FUN_0892ac5c();
  FUN_0892c33c(param_1);
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,in_t1,in_t2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,in_t3,uStackX_0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,uStackX_4,uStackX_8);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,uStackX_c,in_stack_00000010);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}

