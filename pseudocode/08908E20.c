/* Entry 0x08908E20 | file offset 0x00105DF8 | FUN_08908e20 | bytes 300 */

void FUN_08908e20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_089034d0();
  if (iVar1 != 0) {
    FUN_089034b4(param_1);
    if (iVar1 < 3) {
      if (0 < iVar1) {
        if (iVar1 < 2) {
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8));
          }
          FUN_08908fdc(param_1,2);
        }
        else {
          FUN_08908cd0(param_1,param_1 + 0x240);
        }
      }
    }
    else if (iVar1 < 4) {
      piVar2 = *(int **)(param_1 + 0x20);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10));
      }
      FUN_08908fdc(param_1,0);
    }
    else if (iVar1 < 5) {
      piVar2 = *(int **)(param_1 + 0x20);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),0);
      }
      FUN_08908fdc(param_1,0);
    }
  }
  return;
}

