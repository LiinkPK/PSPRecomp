/* Entry 0x088E7318 | file offset 0x000E42F0 | FUN_088e7318 | bytes 232 */

void FUN_088e7318(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fVar1 = (float)param_1[6];
  if (*(char *)((int)param_1 + 0x1d) == '\x01') {
    fVar1 = (float)FUN_08867eec(fVar1 * 3.1415927 * 0.5);
  }
  if (param_1[2] == 0) {
    FUN_089a39ec(1.0 - fVar1,param_2,param_1[1],*param_1);
  }
  else {
    FUN_08868de4(&local_24,*param_1,param_1[1],param_1[2]);
    *param_2 = local_24;
    param_2[1] = local_20;
    param_2[3] = 0x3f800000;
    param_2[2] = local_1c;
  }
  return;
}

