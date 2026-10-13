/* Entry 0x0892F024 | file offset 0x0012BFFC | FUN_0892f024 | bytes 232 */

void FUN_0892f024(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a0 [128];
  
  FUN_0892f10c();
  iVar2 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x68);
  uVar1 = FUN_0887d868(DAT_089d6998,0,*(undefined4 *)(param_1 + iVar2 * 4 + 0xcc),0xffffffff,0,0,0,0
                      );
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_089347e8(auStack_a0,L"%d/%d",iVar2 + 1,iVar3 + 1);
  uVar1 = FUN_0887d868(DAT_089d6998,0,auStack_a0,0xffffffff,0,0,0,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_088d428c(param_1 + 4,param_1 + 0x4c,&DAT_089cf058,1);
  return;
}

