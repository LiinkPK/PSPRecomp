/* Entry 0x088D54DC | file offset 0x000D24B4 | FUN_088d54dc | bytes 76 */

void FUN_088d54dc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_089d6c30;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar2 = FUN_088d4c5c();
    FUN_0889f340(uVar1,uVar2);
  }
  return;
}

