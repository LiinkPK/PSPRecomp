/* Entry 0x088A6028 | file offset 0x000A3000 | FUN_088a6028 | bytes 92 */

void FUN_088a6028(int param_1)

{
  float fVar1;
  
  fVar1 = DAT_089d5eac;
  if (0.0 <= *(float *)(param_1 + 0x128)) {
    fVar1 = *(float *)(param_1 + 0x128);
  }
  FUN_0894088c(*(float *)(param_1 + 300) * fVar1,*(undefined4 *)(param_1 + 8));
  FUN_089408c0(*(undefined4 *)(param_1 + 8));
  return;
}

