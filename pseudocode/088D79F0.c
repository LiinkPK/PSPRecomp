/* Entry 0x088D79F0 | file offset 0x000D49C8 | FUN_088d79f0 | bytes 60 */

undefined4 FUN_088d79f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088d8700(param_1 + 0x4c);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

