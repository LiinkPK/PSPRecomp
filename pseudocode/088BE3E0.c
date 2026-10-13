/* Entry 0x088BE3E0 | file offset 0x000BB3B8 | FUN_088be3e0 | bytes 148 */

void FUN_088be3e0(int param_1,int param_2,char param_3)

{
  if ((int)((param_2 - param_1) + ((uint)(param_2 - param_1 >> 2) >> 0x1e)) >> 2 < 0x11) {
    FUN_088be474(param_1,param_2,(int)param_3);
  }
  else {
    FUN_088be474(param_1,param_1 + 0x40,(int)param_3);
    FUN_088be5dc(param_1 + 0x40,param_2,0,(int)param_3);
  }
  return;
}

