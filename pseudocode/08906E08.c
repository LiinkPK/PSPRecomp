/* Entry 0x08906E08 | file offset 0x00103DE0 | FUN_08906e08 | bytes 356 */

undefined4
FUN_08906e08(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  *(undefined1 *)((int)param_1 + 0x16e5) = 0;
  if (param_5 == 0) {
    iVar4 = FUN_08902ecc(*param_1,param_2,FUN_08907e40,param_1);
    uVar7 = 10;
  }
  else {
    iVar4 = FUN_08902ddc(*param_1,FUN_08907e5c,param_1);
    uVar7 = 0xb;
  }
  if (iVar4 == 1) {
    iVar4 = 0;
    if (0 < param_4) {
      puVar5 = param_1 + 1;
      puVar6 = param_1 + 0x19;
      do {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        *(undefined1 *)puVar5 = *param_3;
        uVar3 = param_3[3];
        *(undefined1 *)((int)puVar5 + 1) = uVar1;
        uVar1 = param_3[4];
        *(undefined1 *)((int)puVar5 + 2) = uVar2;
        uVar2 = param_3[5];
        *(undefined1 *)((int)puVar5 + 3) = uVar3;
        *(undefined1 *)(puVar5 + 1) = uVar1;
        *(undefined1 *)((int)puVar5 + 5) = uVar2;
        FUN_08905868(puVar5,puVar6);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x20;
        param_3 = param_3 + 6;
        puVar6 = puVar6 + 0x20;
      } while (iVar4 < param_4);
    }
    param_1[0x201] = param_4;
    FUN_089359a4(param_1 + 0x599,param_2);
    param_1[0x591] = param_5;
    param_1[0x596] = uVar7;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

