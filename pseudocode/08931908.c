/* Entry 0x08931908 | file offset 0x0012E8E0 | FUN_08931908 | bytes 176 */

void FUN_08931908(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0xbf800000;
  iVar2 = param_1;
  do {
    iVar1 = *(int *)(iVar2 + 0x2b0);
    if ((iVar1 < 0) || (4 < iVar1)) break;
    FUN_0893084c(param_1 + iVar1 * 0x5c + 0x38);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 5);
  FUN_0893105c(param_1);
  FUN_088d3f00(0,param_1 + 0x34,&DAT_089cf1cc);
  return;
}

