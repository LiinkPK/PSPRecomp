/* Entry 0x08847E08 | file offset 0x00044DE0 | FUN_08847e08 | bytes 188 */

undefined4
FUN_08847e08(float param_1,float param_2,float param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_4 + 0x18) & 2) == 0) {
    uVar1 = 0;
    if ((((*(float *)(param_4 + 0x24) <= param_1) && (param_1 < *(float *)(param_4 + 0x28))) &&
        (*(float *)(param_4 + 0x2c) - *(float *)(param_6 + 8) <= param_2)) &&
       (((param_2 <= *(float *)(param_4 + 0x30) + *(float *)(param_6 + 8) &&
         (param_3 <= *(float *)(param_4 + 0x38))) && (*(float *)(param_4 + 0x34) < param_3)))) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

