/* Entry 0x08914F38 | file offset 0x00111F10 | FUN_08914f38 | bytes 160 */

void FUN_08914f38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088a9de8(*DAT_089d8378,9,0,0,0);
  iVar2 = *(int *)(param_1 + 0x6d0);
  FUN_088a7284(*(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0x84),
               *(undefined4 *)(iVar2 + 0x88),iVar1);
  uVar3 = FUN_08837014(*(undefined4 *)(param_1 + 0x6d0));
  FUN_088a72e8(uVar3,uVar3,uVar3,iVar1);
  *(uint *)(iVar1 + 0xdc) = *(uint *)(iVar1 + 0xdc) | 0x100;
  *(undefined4 *)(param_1 + 0x48) = 3;
  FUN_08914b64(param_1,8);
  return;
}

