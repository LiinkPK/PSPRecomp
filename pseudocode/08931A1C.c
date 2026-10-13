/* Entry 0x08931A1C | file offset 0x0012E9F4 | FUN_08931a1c | bytes 152 */

void FUN_08931a1c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_088cb164(DAT_089d712c + 0xf58,param_1);
  iVar3 = 0;
  iVar2 = 0xef;
  do {
    uVar4 = ((undefined4 *)(iVar1 + iVar3))[1];
    *(undefined4 *)(param_2 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
    ((undefined4 *)(param_2 + iVar3))[1] = uVar4;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 8;
  } while (iVar2 != 0);
  FUN_08931ab4(param_2,param_3,param_4);
  return;
}

