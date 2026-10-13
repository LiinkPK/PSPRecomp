/* Entry 0x089805B4 | file offset 0x0017D58C | FUN_089805b4 | bytes 148 */

void FUN_089805b4(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_4;
  iVar1 = **(int **)(iVar2 + 0x4c);
  (**(code **)(iVar1 + 0x14))
            (*(undefined4 *)(iVar2 + 0x10),
             (int)*(int **)(iVar2 + 0x4c) + (int)*(short *)(iVar1 + 0x10),param_3,iVar2 + 0x50,
             *(undefined4 *)(iVar2 + 0x5c));
  FUN_08982070(iVar2,param_2,param_3);
  if (*(char *)(param_3 + 0x71) != '\0') {
    FUN_08982350(iVar2,param_2,param_3);
  }
  return;
}

