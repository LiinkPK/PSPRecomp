/* Entry 0x0880C150 | file offset 0x00009128 | FUN_0880c150 | bytes 392 */

float FUN_0880c150(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if ((param_1 < param_2) || (param_3 < param_1)) {
    fVar2 = param_1 - param_2;
    if ((fVar2 <= -3.1415927) || (3.1415927 <= fVar2)) {
      if (0.0 < fVar2) {
        fVar2 = (float)FUN_089941c0(fVar2 + 3.1415927,0x40c90fdb);
        fVar2 = fVar2 - 3.1415927;
      }
      else {
        fVar2 = (float)FUN_089941c0(3.1415927 - fVar2,0x40c90fdb);
        fVar2 = 3.1415927 - fVar2;
      }
    }
    param_1 = param_1 - param_3;
    if ((param_1 <= -3.1415927) || (3.1415927 <= param_1)) {
      if (0.0 < param_1) {
        param_1 = (float)FUN_089941c0(param_1 + 3.1415927,0x40c90fdb);
        param_1 = param_1 - 3.1415927;
      }
      else {
        param_1 = (float)FUN_089941c0(3.1415927 - param_1,0x40c90fdb);
        param_1 = 3.1415927 - param_1;
      }
    }
    fVar2 = (float)FUN_089a4500(fVar2);
    fVar1 = (float)FUN_089a4500(param_1);
    param_1 = param_2;
    if (fVar1 <= fVar2) {
      param_1 = param_3;
    }
  }
  return param_1;
}

