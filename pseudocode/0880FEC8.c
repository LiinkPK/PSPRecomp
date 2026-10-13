/* Entry 0x0880FEC8 | file offset 0x0000CEA0 | FUN_0880fec8 | bytes 288 */

undefined4
FUN_0880fec8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_40 [20];
  
  iVar4 = *(int *)(*(int *)(param_2 + 0x94) + 0x1c);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = iVar4;
  }
  iVar2 = FUN_08934944(param_7,iVar2 + 8,*(undefined4 *)(iVar2 + 4),8,&LAB_0880fb60);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 2);
    FUN_0886f028(auStack_40);
    FUN_0886f0b4(0,0,auStack_40,uVar1);
    FUN_0886f08c(param_1,auStack_40);
    FUN_0886ab1c(*(undefined4 *)(param_2 + 0x98),auStack_40,1);
    uVar3 = FUN_0886b6bc(*(undefined4 *)(param_2 + 0x98),param_3,param_4,param_5,param_6,param_8);
    FUN_0886f048(auStack_40,2);
  }
  return uVar3;
}

