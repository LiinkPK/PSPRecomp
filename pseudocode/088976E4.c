/* Entry 0x088976E4 | file offset 0x000946BC | FUN_088976e4 | bytes 480 */

float FUN_088976e4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  int local_2c;
  
  puVar2 = &local_60;
  local_60 = 0xbba3d70a;
  local_5c = 0;
  local_58 = 0x3c0de3bd;
  local_54 = 0xbba3d70a;
  local_50 = 0;
  local_4c = 0xbc0de3bd;
  local_48 = 0x3c23d70a;
  local_44 = 0;
  local_40 = 0;
  iVar1 = FUN_0889740c(param_1);
  if (iVar1 == 1) {
    if (param_2 != 0) {
      FUN_08935828(param_2,0,0x30);
    }
    fVar3 = -100.0;
  }
  else {
    local_30 = param_3;
    local_2c = param_2;
    fVar3 = (float)FUN_08899d14(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (fVar3 == -3.4028235e+38) {
      iVar1 = 0;
      do {
        FUN_089a34c0(auStack_3c,puVar2);
        FUN_089a34f4(auStack_3c,auStack_3c,local_30);
        fVar3 = (float)FUN_08899d14(param_1,local_2c,auStack_3c,param_4,param_5,param_6,param_7);
        if (fVar3 != -3.4028235e+38) {
          return fVar3;
        }
        iVar1 = iVar1 + 1;
        puVar2 = (undefined4 *)((int)puVar2 + 0xc);
      } while (iVar1 < 3);
    }
  }
  return fVar3;
}

