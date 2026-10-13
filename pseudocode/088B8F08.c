/* Entry 0x088B8F08 | file offset 0x000B5EE0 | FUN_088b8f08 | bytes 200 */

void FUN_088b8f08(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (*(short *)(iVar2 + 0x1604) == param_2) {
      puVar3 = (undefined2 *)(iVar2 + 0x1604);
      break;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 2);
  if (puVar3 == (undefined2 *)0x0) {
    iVar1 = 0;
    iVar2 = param_1;
    do {
      if (*(short *)(iVar2 + 0x1604) == -1) {
        puVar3 = (undefined2 *)(iVar2 + 0x1604);
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 2);
  }
  if ((puVar3 != (undefined2 *)0x0) && ((short)puVar3[1] < param_3)) {
    FUN_088b8da8(param_1,param_2,param_3 - (short)puVar3[1]);
    *puVar3 = (short)param_2;
    puVar3[1] = (short)param_3;
  }
  return;
}

