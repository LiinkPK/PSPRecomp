/* Entry 0x0886CEF0 | file offset 0x00069EC8 | FUN_0886cef0 | bytes 328 */

void FUN_0886cef0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08882118(0x39400,4);
  *param_1 = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x39400,"MODEL_MANAGER",4);
  param_1[1] = uVar1;
  uVar1 = FUN_0885c6cc(uVar1,0x2cc00,0,0,1,0);
  param_1[2] = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x2cc00,"MODEL PACKET",0x40);
  param_1[5] = uVar1;
  uVar1 = FUN_0885c6cc(uVar1,0x10000,0,0,1,0);
  param_1[3] = uVar1;
  uVar1 = FUN_0885c6cc(param_1[1],0x4000,0,0,1,0);
  param_1[4] = uVar1;
  DAT_089d5eb8 = FUN_0885c40c(uVar1,0x4000,"MODEL NAME_TABLE",4);
  param_1[6] = DAT_089d5eb8;
  DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
  DAT_09b26b0c = DAT_09af84d0 >> 0x10 & 0x7fff;
  return;
}

