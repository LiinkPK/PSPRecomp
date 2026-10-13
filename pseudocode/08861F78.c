/* Entry 0x08861F78 | file offset 0x0005EF50 | FUN_08861f78 | bytes 176 */

bool FUN_08861f78(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_290 [256];
  undefined1 auStack_190 [256];
  undefined1 auStack_90 [128];
  
  if (param_3 < 0x14) {
    FUN_0893476c(auStack_190,"dlc_%03d.bin",param_3);
    FUN_08862678(auStack_290,&DAT_089c8ef0,auStack_190);
    FUN_0893476c(auStack_90,"dlc/bgm/dlc_%03d.bin",param_3);
    uVar1 = FUN_08861b84(auStack_90);
    FUN_0893476c(param_2,"%s/%s.edat",auStack_290,uVar1);
  }
  return param_3 < 0x14;
}

