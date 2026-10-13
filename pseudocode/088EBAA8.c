/* Entry 0x088EBAA8 | file offset 0x000E8A80 | FUN_088ebaa8 | bytes 548 */

void FUN_088ebaa8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 local_a0 [2];
  char *local_9c;
  undefined2 local_98;
  char *local_94;
  undefined2 local_90;
  char *local_8c;
  undefined2 local_88;
  char *local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 local_78 [17];
  int local_34;
  
  puVar4 = local_a0;
  if (param_2 != 0) {
    local_a0[0] = 1;
    local_9c = "menu_pk_loading_seq_0.bin";
    local_98 = 1;
    local_94 = "menu_lpk_loading_seq_0.bin";
    local_90 = 0;
    local_8c = "menu_pk_loading_gim_0.bin";
    local_88 = 0;
    local_84 = "menu_lpk_loading_gim_0.bin";
    local_80 = 0xffff;
    local_7c = 0;
    local_78[0] = 0x1a0a;
    local_78[1] = 0x1a02;
    local_78[2] = 0x1a04;
    local_78[3] = 0x1a08;
    local_78[4] = 0x1a0c;
    local_78[5] = 0x1a0e;
    local_78[6] = 0x1a10;
    local_78[7] = 0x1a00;
    local_78[8] = 0x1801;
    local_78[9] = 0x1801;
    local_78[10] = 0x1802;
    local_78[0xb] = 0x1801;
    local_78[0xc] = 0x1803;
    local_78[0xd] = 0x1803;
    local_78[0xe] = 0xffffffff;
    local_78[0xf] = 0x1800;
    local_34 = param_2;
    uVar1 = FUN_088821c0();
    FUN_088d00fc(DAT_089d7830,uVar1,0x32000,7,local_a0,local_34);
    iVar3 = 0;
    puVar2 = param_1;
    do {
      uVar1 = *(undefined4 *)((int)puVar4 + 0x48);
      if (iVar3 == 2) {
        if (DAT_089d5f1d == '\x01') {
          uVar1 = FUN_088d0700(DAT_089d7830,7,0x1a06,uVar1);
          *puVar2 = uVar1;
        }
        else {
          uVar1 = FUN_088d0700(DAT_089d7830,7,0x1a04,uVar1);
          *puVar2 = uVar1;
        }
      }
      else {
        uVar1 = FUN_088d0700(DAT_089d7830,7,*(undefined4 *)((int)puVar4 + 0x28),uVar1);
        *puVar2 = uVar1;
      }
      iVar3 = iVar3 + 1;
      puVar4 = (undefined2 *)((int)puVar4 + 4);
      puVar2 = puVar2 + 1;
    } while (iVar3 < 8);
    puVar2 = (undefined4 *)FUN_088d09d8(DAT_089d7830,7,0x1804);
    param_1[8] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0887e090(DAT_089d6998,*puVar2,0,0x12,0x80);
    }
  }
  return;
}

