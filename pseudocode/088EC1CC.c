/* Entry 0x088EC1CC | file offset 0x000E91A4 | FUN_088ec1cc | bytes 76 */

void FUN_088ec1cc(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x34))((int)piVar2 + (int)*(short *)(*piVar2 + 0x30),param_1);
    *(undefined1 *)(param_1 + 0x51) = uVar1;
  }
  return;
}

