/* Entry 0x0891EB38 | file offset 0x0011BB10 | FUN_0891eb38 | bytes 104 */

void FUN_0891eb38(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_0891eae0(param_1);
  iVar2 = 0;
  piVar1 = param_2 + 8;
  if (0 < *param_2) {
    do {
      iVar2 = iVar2 + 1;
      *param_1 = (char)*(undefined2 *)((int)piVar1 + 2);
      piVar1 = piVar1 + 0xba;
      param_1 = param_1 + 2;
    } while (iVar2 < *param_2);
  }
  return;
}

