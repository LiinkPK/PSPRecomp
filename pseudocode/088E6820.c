/* Entry 0x088E6820 | file offset 0x000E37F8 | FUN_088e6820 | bytes 288 */

void FUN_088e6820(undefined4 *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 - 0x25a;
  if (uVar1 < 5) {
    if (uVar1 == 1) {
      FUN_088e699c(param_1);
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else if (uVar1 == 2) {
      param_1[7] = -((float)param_1[6] / (float)*(int *)(param_2 + 4));
    }
    else if (uVar1 == 3) {
      param_1[6] = (float)*(int *)(param_2 + 4) * 0.01;
      FUN_0889f37c(DAT_089d6c30,*param_1);
    }
    else if (uVar1 == 4) {
      if ((float)param_1[6] < 3.0) {
        param_1[7] = (3.0 - (float)param_1[6]) / (float)*(int *)(param_2 + 4);
      }
    }
    else {
      param_1[6] = 0x3f800000;
      *(undefined1 *)(param_1 + 8) = 1;
      FUN_088e6940(param_1);
    }
  }
  return;
}

