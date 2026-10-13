/* Entry 0x08898C2C | file offset 0x00095C04 | FUN_08898c2c | bytes 460 */

float FUN_08898c2c(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_40 [12];
  float local_34;
  
  local_34 = param_1;
  FUN_0889732c();
  if (0.0 < param_2) {
    fVar1 = 0.01;
  }
  else {
    if (0.0 <= param_2) {
      return local_34;
    }
    param_2 = -param_2;
    fVar1 = -0.01;
  }
  iVar2 = 0;
  while( true ) {
    fVar5 = local_34 + fVar1;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
      goto LAB_08898da8;
    }
    if (1.0 < fVar5) break;
    FUN_0889732c(fVar5,param_3,param_4,auStack_40);
    fVar3 = (float)FUN_089a3804(auStack_40,param_5);
    fVar4 = (float)FUN_089a4500(fVar3 - param_2);
    if (fVar4 < 0.01) goto LAB_08898da8;
    if (fVar3 != 0.0) {
      if (param_2 / fVar3 < 50.0) {
        fVar1 = (param_2 / fVar3) * fVar1;
      }
      else {
        fVar1 = fVar1 * 50.0;
      }
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
LAB_08898da8:
      FUN_0889732c(fVar5,param_3,param_4,param_5);
      return fVar5;
    }
  }
  fVar5 = 1.0;
  goto LAB_08898da8;
}

