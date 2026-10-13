/* Entry 0x088EC010 | file offset 0x000E8FE8 | FUN_088ec010 | bytes 304 */

undefined4 FUN_088ec010(int param_1)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  short local_30 [2];
  code *local_2c;
  undefined2 local_28;
  undefined2 local_26;
  code *local_24;
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_2c = FUN_088ec140;
  local_28 = 0;
  local_26 = 0;
  local_24 = FUN_088ec1cc;
  FUN_08865918(DAT_089d5ec0);
  FUN_0886598c(DAT_089d5ec0);
  FUN_0890e794(0);
  FUN_08872f08(0);
  FUN_0887dbd4(DAT_089d6998);
  FUN_08873e6c(0);
  iVar1 = *(int *)(param_1 + 0x24);
  param_1 = param_1 + local_30[iVar1 * 4];
  pcVar3 = (&local_2c)[iVar1 * 2];
  if (local_30[iVar1 * 4 + 1] != 0) {
    psVar2 = (short *)(*(int *)(pcVar3 + param_1) + local_30[iVar1 * 4 + 1] * 8);
    pcVar3 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar3)(param_1);
  FUN_088ced50(DAT_089d7830,0);
  FUN_0887de04(DAT_089d6998);
  FUN_088ced34(DAT_089d7830,0);
  FUN_08873e90(0);
  FUN_08865e50(DAT_089d5ec0);
  FUN_088a1ae4(0);
  FUN_08883f9c(DAT_089d69e0,1,0);
  return 1;
}

