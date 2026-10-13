/* Entry 0x08866E04 | file offset 0x00063DDC | FUN_08866e04 | bytes 184 */

bool FUN_08866e04(float *param_1)

{
  undefined1 auStack_30 [12];
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  FUN_089a3868(auStack_30);
  local_24 = 0x3f800000;
  FUN_089a4af8(&local_20,DAT_089d5ec0 + 0x830,auStack_30);
  if (0.0 <= local_14) {
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    *param_1 = (local_20 * 0.5 + 0.5) * 480.0;
    param_1[1] = 272.0 - (local_1c * 0.5 + 0.5) * 272.0;
  }
  return 0.0 <= local_14;
}

