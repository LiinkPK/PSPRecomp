/* Entry 0x0892F4EC | file offset 0x0012C4C4 | FUN_0892f4ec | bytes 192 */

void FUN_0892f4ec(int param_1)

{
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  undefined4 uStackX_0;
  
  FUN_0892ac5c();
  FUN_0892fb80(param_1,in_t0,in_t1,in_t2,in_t3,uStackX_0);
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x16) = 2;
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x15) = 200;
  FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 0x30));
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x16) = 2;
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x15) = 200;
  FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 0x2c));
  return;
}

