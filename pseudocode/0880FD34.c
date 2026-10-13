/* Entry 0x0880FD34 | file offset 0x0000CD0C | FUN_0880fd34 | bytes 236 */

undefined4 FUN_0880fd34(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x94) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(*(int *)(param_2 + 0x94) + 0x1c) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x94) + 0x1c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    iVar2 = FUN_08934944(param_3,iVar2 + 8,*(undefined4 *)(iVar2 + 4),8,&LAB_0880fb60);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(undefined2 *)(iVar2 + 2);
      FUN_0886f0b4(0,param_1,param_2 + 0x9c,uVar1);
      *(undefined4 *)(param_2 + 0xb0) = param_4;
      uVar3 = FUN_0886b344(*(undefined4 *)(param_2 + 0x98),uVar1);
      *(undefined4 *)(param_2 + 0xb8) = uVar3;
      *(undefined4 *)(param_2 + 0xb4) = 2;
      uVar3 = 1;
    }
  }
  return uVar3;
}

