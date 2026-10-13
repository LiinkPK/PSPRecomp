/* Entry 0x088D3910 | file offset 0x000D08E8 | FUN_088d3910 | bytes 244 */

void FUN_088d3910(undefined1 param_1,int param_2,short *param_3,int param_4,char param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + param_4 * 4);
  sVar1 = *param_3;
  while (sVar1 != -1) {
    if (param_3[1] == -1) {
      uVar2 = FUN_088d0700(DAT_089d7830,param_1,sVar1,0xffffffff);
      *puVar3 = uVar2;
    }
    else {
      uVar2 = FUN_088d0700(DAT_089d7830,param_1,sVar1,param_3[1]);
      *puVar3 = uVar2;
    }
    if (param_5 == '\0') {
      FUN_08885ad4(uVar2);
    }
    else {
      FUN_08885a78();
    }
    param_3 = param_3 + 2;
    puVar3 = puVar3 + 1;
    sVar1 = *param_3;
  }
  return;
}

