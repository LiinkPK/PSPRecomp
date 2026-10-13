/* Entry 0x08970264 | file offset 0x0016D23C | FUN_08970264 | bytes 232 */

void FUN_08970264(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 10);
  puVar5 = &DAT_09b6f498 + uVar3;
  if (0x13f < uVar3) {
    FUN_08934a48(0xffffffff);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar4 = (int *)*puVar5;
  if ((int *)*puVar5 != (int *)0x0) {
    do {
      piVar1 = piVar4;
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar4 = (int *)piVar1[1];
    } while (piVar1 != param_1);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      if (piVar4 == (int *)0x0) {
        *puVar5 = 0;
        (&DAT_09b6f998)[uVar3] = 0;
      }
      else {
        *puVar5 = piVar4;
        *piVar4 = 0;
      }
    }
    else if (piVar4 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      (&DAT_09b6f998)[uVar3] = *piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar4;
      *piVar4 = *piVar1;
    }
  }
  return;
}

