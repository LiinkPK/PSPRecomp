/* Entry 0x08983DF0 | file offset 0x00180DC8 | FUN_08983df0 | bytes 384 */

void FUN_08983df0(undefined4 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_20 [16];
  
  if (param_1[0x18] != 0) {
    FUN_08983cd8(param_1[0x15]);
    FUN_08983b74(param_1[0x17]);
    FUN_089a4aac(0,0x437f0000,auStack_20,param_1[0xe]);
    FUN_089a3918(auStack_20,&DAT_089da410,auStack_20);
    uVar1 = FUN_089a48cc(auStack_20);
    FUN_089a0c8c(uVar1);
    if (*(char *)(param_1 + 0x16) == '\0') {
      FUN_08973334(param_1[0x18],param_1[0xd],0,0,0,0);
    }
    else {
      FUN_08973334(param_1[0x18],param_1[0xd],5,1,0,0);
    }
    FUN_089a0384(9);
    FUN_089a0930(param_1[7],param_1[8],param_1[9],param_1[10]);
    fVar2 = (float)(int)param_1[7];
    if ((int)param_1[7] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)(int)param_1[8];
    if ((int)param_1[8] < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    FUN_089a094c(*param_1,param_1[1],param_1[4],(int)((float)param_1[5] * fVar2),
                 (int)((float)param_1[6] * fVar3),param_1[0xb],param_1[0xc]);
  }
  return;
}

