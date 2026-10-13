/* Entry 0x0881FE78 | file offset 0x0001CE50 | FUN_0881fe78 | bytes 156 */

void FUN_0881fe78(float param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_2 + 8) + 0x2c);
  if (0.0 < fVar2) {
    param_1 = *(float *)(param_2 + 0xc) + param_1;
    *(float *)(param_2 + 0xc) = param_1;
    if (fVar2 <= param_1) {
      do {
        param_1 = param_1 - fVar2;
      } while (fVar2 <= param_1);
      *(float *)(param_2 + 0xc) = param_1;
    }
    uVar1 = FUN_089a2c70((param_1 * 6.2831855) / fVar2);
    *(undefined4 *)(param_2 + 0x30) = uVar1;
  }
  return;
}

