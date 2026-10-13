/* Entry 0x08816BA8 | file offset 0x00013B80 | FUN_08816ba8 | bytes 332 */

undefined4 FUN_08816ba8(char *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_3 != 0) &&
       ((**(int **)(param_3 + 0x3a4) == 3 || (**(int **)(param_3 + 0x3a4) == 0x17)))) {
      bVar1 = false;
      iVar3 = 0;
      do {
        iVar3 = FUN_0881cb80(iVar3);
        if (iVar3 == 0) goto LAB_08816c90;
      } while ((((*(short **)(iVar3 + 0x48) == (short *)0x0) ||
                (**(short **)(iVar3 + 0x48) != param_2)) || (*(int *)(iVar3 + 0x4c) == 0)) ||
              (*(int *)(*(int *)(iVar3 + 0x4c) + 0x10) == 0));
      bVar1 = true;
LAB_08816c90:
      if (bVar1) {
        return 0;
      }
    }
    iVar3 = FUN_0881b278(param_1 + 4,param_2,param_3,param_4,param_5);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

