/* Entry 0x088D5528 | file offset 0x000D2500 | FUN_088d5528 | bytes 132 */

void FUN_088d5528(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_0889f340(DAT_089d6c30,0);
    FUN_0889f2b8(DAT_089d6c30);
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 != 0) {
    FUN_0885c538(param_2,iVar1,0x80);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

