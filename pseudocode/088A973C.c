/* Entry 0x088A973C | file offset 0x000A6714 | FUN_088a973c | bytes 216 */

void FUN_088a973c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_80 [96];
  
  iVar3 = DAT_089d5ec0 + 0x720;
  iVar4 = DAT_089d5ec0 + 0x7e0;
  FUN_08882950(auStack_80);
  iVar2 = 0;
  fVar6 = DAT_089d5eac * (float)param_1[2];
  uVar1 = FUN_0885ea88(iVar3);
  uVar5 = FUN_08873574(iVar4);
  FUN_08882958(uVar5,0x3fe1e1e2,0,0x447a0000,auStack_80,uVar1);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x34);
    }
    if (iVar2 == 0) break;
    FUN_088a9c18(fVar6,iVar2,auStack_80);
  }
  return;
}

