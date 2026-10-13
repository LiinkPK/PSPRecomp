/* Entry 0x088C1678 | file offset 0x000BE650 | FUN_088c1678 | bytes 100 */

int FUN_088c1678(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_40 [48];
  int local_10;
  
  bVar1 = true;
  if (param_1[1] != 0) {
    FUN_088c014c(auStack_40,param_1[1]);
    bVar1 = local_10 == 0;
  }
  if ((bVar1) && (*param_1 != 0)) {
    iVar2 = (int)*(short *)(*param_1 + 8);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

