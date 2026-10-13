/* Entry 0x088EC140 | file offset 0x000E9118 | FUN_088ec140 | bytes 140 */

void FUN_088ec140(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_088eb17c(param_1 + 0x2c);
  if (iVar1 == 1) {
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_1);
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  FUN_088eba98();
  FUN_088eb65c(param_1 + 0x2c);
  return;
}

