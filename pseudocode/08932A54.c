/* Entry 0x08932A54 | file offset 0x0012FA2C | FUN_08932a54 | bytes 160 */

void FUN_08932a54(int param_1)

{
  undefined4 uVar1;
  undefined1 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  undefined4 uStackX_0;
  
  FUN_0892ac5c();
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,in_t1,in_t2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,in_t3,uStackX_0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

