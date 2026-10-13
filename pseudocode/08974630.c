/* Entry 0x08974630 | file offset 0x00171608 | FUN_08974630 | bytes 592 */

void FUN_08974630(undefined4 param_1,int *param_2,int param_3,uint param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = FUN_08973ec8(param_3);
  iVar7 = iVar1 * param_4 + ((uint)((int)(iVar1 * param_4) >> 3) >> 0x1d);
  iVar8 = iVar7 >> 3;
  iVar1 = FUN_089742b4(param_1,param_6);
  if (iVar1 == 0) {
    uVar2 = FUN_08974084(param_1,iVar8,param_6);
    uVar3 = FUN_089742e8(param_1,uVar2);
    uVar4 = uVar3 & 0xffffff;
    uVar3 = (uVar3 >> 0x18 & 0xf) << 0x10;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = param_5 & 0xffffff | 0xb2000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = (param_5 >> 0x18 & 0xf) << 0x10 | 0xb3000000 | param_4;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xeb000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = uVar4 | 0xb4000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = uVar3 | 0xb5000000 | param_4;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xec000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = param_4 - 1 | 0xee000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = param_3 == 3 | 0xea000000;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xcc000000;
  }
  else {
    uVar3 = FUN_089742e8(param_1,iVar1);
    uVar4 = uVar3 & 0xffffff;
    uVar3 = (uVar3 >> 0x18 & 0xf) << 0x10;
  }
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = uVar4 | 0xb0000000;
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = uVar3 | 0xb1000000;
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = (int)(iVar8 + ((uint)(iVar7 >> 8) >> 0x1b)) >> 5 | 0xc4000000;
  return;
}

