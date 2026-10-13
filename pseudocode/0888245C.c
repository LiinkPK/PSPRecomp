/* Entry 0x0888245C | file offset 0x0007F434 | FUN_0888245c | bytes 344 */

void FUN_0888245c(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)0x0;
  do {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 4);
    }
    else {
      piVar2 = (int *)piVar2[0xd];
    }
  } while ((piVar2 != (int *)0x0) && ((piVar2[10] & param_2) != param_3));
joined_r0x088824b8:
  do {
    do {
      piVar3 = piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
      do {
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(param_1 + 4);
        }
        else {
          piVar3 = (int *)piVar3[0xd];
        }
      } while ((piVar3 != (int *)0x0) && ((piVar3[10] & param_2) != param_3));
      *(int **)(param_1 + 0x14) = piVar3;
      uVar1 = DAT_089d69b0;
      DAT_089d69b0 = piVar2;
      *(int **)(param_1 + 0x10) = piVar2;
      if (*piVar2 == 0) {
        FUN_088828bc(param_1,piVar2);
      }
      else {
        piVar2[0x11] = param_2;
        piVar2[0x12] = param_3;
        (*(code *)*piVar2)(piVar2);
        param_2 = piVar2[0x11];
        param_3 = piVar2[0x12];
      }
      DAT_089d69b0 = (int *)uVar1;
      *(undefined4 *)(param_1 + 0x10) = 0;
      piVar2 = *(int **)(param_1 + 0x14);
    } while ((piVar2 == (int *)0x0) || ((piVar2[10] & param_2) == param_3));
    do {
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(param_1 + 4);
      }
      else {
        piVar2 = (int *)piVar2[0xd];
      }
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        goto joined_r0x088824b8;
      }
    } while ((piVar2[10] & param_2) != param_3);
    *(int **)(param_1 + 0x14) = piVar2;
  } while( true );
}

