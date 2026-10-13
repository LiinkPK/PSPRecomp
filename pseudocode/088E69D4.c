/* Entry 0x088E69D4 | file offset 0x000E39AC | FUN_088e69d4 | bytes 196 */

void FUN_088e69d4(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  
  if ((param_1[1] != 0) && (fVar2 = (float)param_1[7], fVar2 != 0.0)) {
    fVar1 = (float)param_1[6];
    if (0.0 < fVar2) {
      fVar1 = fVar1 + fVar2;
      param_1[6] = fVar1;
      if (3.0 < fVar1) {
        param_1[6] = 0x40400000;
        param_1[7] = 0;
        fVar1 = (float)param_1[6];
      }
    }
    else if (fVar2 < 0.0) {
      fVar1 = fVar1 + fVar2;
      param_1[6] = fVar1;
      if (fVar1 < 0.0) {
        param_1[6] = 0;
        param_1[7] = 0;
        fVar1 = (float)param_1[6];
      }
    }
    FUN_0889f37c(fVar1,DAT_089d6c30,*param_1);
  }
  return;
}

