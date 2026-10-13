/* Entry 0x0896F87C | file offset 0x0016C854 | FUN_0896f87c | bytes 108 */

float FUN_0896f87c(float param_1,float param_2,undefined1 (*param_3) [12],undefined1 (*param_4) [12]
                  )

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  auVar1 = vsub_t(*param_3,*param_4);
  uVar3 = vdot_t(auVar1,auVar1);
  fVar4 = (float)vsqrt_s(uVar3);
  if (fVar4 <= param_2) {
    fVar2 = 1.0;
    if (param_1 <= fVar4) {
      fVar2 = 1.0 - (fVar4 - param_1) / (param_2 - param_1);
    }
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2;
}

