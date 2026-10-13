/* Entry 0x08904980 | file offset 0x00101958 | FUN_08904980 | bytes 608 */

void FUN_08904980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_20 [8];
  
  iVar1 = 0;
  switch(param_2) {
  case 1:
    iVar1 = FUN_089041f0(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 2:
    iVar1 = FUN_08904218(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 3:
    iVar1 = FUN_08904424(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 4:
    iVar1 = FUN_08904444(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 5:
    iVar1 = FUN_089044a4(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 6:
    iVar1 = FUN_089045d8(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 7:
    iVar1 = FUN_089045ec(DAT_089d8148,param_3);
    break;
  case 8:
    iVar1 = FUN_0890460c(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 9:
    iVar1 = FUN_0890462c(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 10:
    iVar1 = FUN_08904634(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 0xb:
    iVar1 = FUN_089046ac(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 0xc:
    iVar1 = FUN_089046b4(DAT_089d8148,param_3,param_4,param_5);
    break;
  case 0xd:
    iVar1 = FUN_089046bc(DAT_089d8148,param_3,param_4,param_5);
  }
  if ((*(int *)(DAT_089d8148 + 0x108) != 0) && (iVar1 == 1)) {
    FUN_08905810(auStack_20,param_3);
    iVar1 = **(int **)(DAT_089d8148 + 0x108);
    (**(code **)(iVar1 + 0xc))
              ((int)*(int **)(DAT_089d8148 + 0x108) + (int)*(short *)(iVar1 + 8),param_2,auStack_20,
               param_5,param_4);
  }
  return;
}

