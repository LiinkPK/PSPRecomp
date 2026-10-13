/* Entry 0x088A754C | file offset 0x000A4524 | FUN_088a754c | bytes 280 */

void FUN_088a754c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 2;
  iVar1 = FUN_088a751c();
  if (iVar1 == 1) {
    FUN_088a49c4(*(undefined4 *)(param_1 + 0xcc));
  }
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104));
  }
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0x1fc);
  do {
    if (*piVar4 != 0) {
      if (*(int *)(*piVar4 + 0x30) == 0) {
LAB_088a7600:
        FUN_088a1e44(0);
        iVar3 = *piVar4;
      }
      else {
        iVar2 = FUN_088a1ff4();
        iVar3 = *piVar4;
        if ((iVar2 == 1) || ((*(uint *)(piVar4[1] + 0x10) & 1) != 0)) goto LAB_088a7600;
      }
      *(undefined4 *)(iVar3 + 0x44) = 0;
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(*piVar4 + 0x54) = 0;
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 2;
    if (0xf < iVar1) {
      iVar1 = *(int *)(param_1 + 0xcc);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      return;
    }
  } while( true );
}

