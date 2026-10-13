/* Entry 0x0891B8C0 | file offset 0x00118898 | FUN_0891b8c0 | bytes 172 */

void FUN_0891b8c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0891a290(param_1);
  (**(code **)(*param_2 + 0xc))((int)param_2 + (int)*(short *)(*param_2 + 8),param_1);
  iVar3 = 0;
  iVar2 = param_1 + 0x2a50;
  iVar1 = param_1 + 0x48;
  do {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      FUN_0891eae0(iVar2);
    }
    else {
      FUN_0891eb38(iVar2,iVar1);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x13;
    iVar1 = iVar1 + 0xea8;
  } while (iVar3 < 2);
  return;
}

