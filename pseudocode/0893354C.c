/* Entry 0x0893354C | file offset 0x00130524 | FUN_0893354c | bytes 1332 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0893354c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  char *local_28;
  
  FUN_08860df8();
  uVar1 = FUN_089a2c00();
  FUN_089a2c0c(uVar1 & 0xfffff07f);
  FUN_08881f78(DAT_089d69a0);
  FUN_08862720();
  FUN_0888221c(DAT_089d69a8);
  FUN_08883f10(DAT_089d69e0);
  FUN_08883f78();
  FUN_08864d0c(DAT_089d5ea8);
  FUN_088665f0(DAT_089d5ec0);
  FUN_088627e4(DAT_089d5ea0,&DAT_089cf49c);
  *DAT_089d5f98 = 0;
  FUN_08867bd4();
  FUN_08867800();
  FUN_08881954(DAT_089d6998);
  FUN_0886f23c(DAT_089d5fb4);
  FUN_08862650();
  FUN_0885bffc(DAT_089d4e14);
  FUN_0888321c();
  iVar2 = FUN_088820c0();
  if (iVar2 != 0) {
    puVar8 = PTR_s_general_archive_main_main_bin_089d85ac;
    puVar10 = PTR_s_general_archive_main_JP_main_lan_089d85b0;
    if (DAT_089d5f20 != '\0') {
      puVar8 = PTR_s_general_archive_main_main_prolog_089d85b4;
      puVar10 = PTR_s_general_archive_main_JP_main_lan_089d85b8;
    }
    iVar3 = FUN_08862c40(puVar8,1);
    if (((0 < iVar3) && (iVar4 = FUN_08862c40(puVar10,1), 0 < iVar4)) &&
       (iVar5 = FUN_0885c6cc(iVar2,0x200000,0x40,0,1,1), iVar5 != 0)) {
      iVar9 = iVar5 + 0x180000;
      iVar6 = FUN_08862854(puVar8,iVar5,0x180000,1);
      if (iVar6 == iVar3) {
        FUN_088698fc(auStack_30);
        iVar3 = FUN_08869954(auStack_30,iVar5);
        if (iVar3 == 0) {
          FUN_0885c538(iVar2,iVar5,0x40);
          FUN_08869908(auStack_30,2);
        }
        else {
          iVar3 = FUN_08862854(puVar10,iVar9,0x80000,1);
          if (iVar3 == iVar4) {
            FUN_088698fc(auStack_2c);
            iVar3 = FUN_08869954(auStack_2c,iVar9);
            if (iVar3 == 0) {
              FUN_0885c538(iVar2,iVar9,0x40);
              FUN_08869908(auStack_2c,2);
              FUN_08869908(auStack_30,2);
            }
            else {
              FUN_08872f90(DAT_089d6008);
              FUN_08872a70(1);
              FUN_0886cef0(DAT_089d5f94);
              FUN_088a0c10();
              FUN_088a1274(DAT_089d6c88);
              FUN_088a0d80(DAT_089d6c80);
              local_28 = "sound/snd_common.scd";
              iVar3 = FUN_08869ab4(auStack_30,"snd_common.scd");
              if (iVar3 != 0) {
                FUN_088a0dbc(DAT_089d6c80,local_28,*(undefined4 *)(iVar3 + 4),
                             *(undefined4 *)(iVar3 + 8),1);
              }
              FUN_0889ee60(DAT_089d6c30,auStack_30,auStack_2c);
              FUN_088a0ab4(auStack_30);
              FUN_088a4258(auStack_30);
              FUN_088a215c();
              FUN_0889fc90();
              FUN_088a5054();
              FUN_088a52ec(DAT_089d6d78,auStack_30);
              FUN_08841b84(DAT_089d4958,auStack_30);
              FUN_08873c48();
              FUN_088748d4();
              FUN_08874ee0(DAT_089d6028);
              FUN_088754c4();
              FUN_0885c30c();
              FUN_088bd888();
              FUN_0887b13c();
              FUN_0887b648();
              FUN_08885c04(auStack_2c);
              FUN_088ce968(DAT_089d7830);
              FUN_088ebaa8(DAT_089d7ed0,auStack_2c);
              FUN_0885cb78();
              FUN_088aec54(DAT_089d712c,auStack_2c);
              FUN_088b0ad8();
              FUN_088afb00(DAT_089d7260);
              FUN_088fc938(DAT_089d7f90,auStack_30);
              FUN_088b1628(DAT_089d7280);
              FUN_088ba88c(auStack_30,auStack_2c);
              FUN_08897190(auStack_30);
              FUN_088c6c7c(auStack_30,auStack_2c);
              FUN_088b3930(auStack_30,auStack_2c);
              FUN_088d1604(DAT_089d7830,auStack_30);
              uVar7 = FUN_088ce2a8();
              FUN_088cdfbc(uVar7,auStack_2c);
              uVar7 = FUN_0887cfe4();
              FUN_0887cfac(uVar7);
              FUN_08875928(DAT_089d6040);
              FUN_08861000(DAT_089d5e88);
              FUN_0885c538(iVar2,iVar5,0x40);
              FUN_08933bf0(DAT_089d85e8);
              FUN_08933c00(DAT_089d85e8);
              func_0x089de910(_DAT_089e09c0,1);
              func_0x089de94c(_DAT_089e09c0);
              FUN_08869908(auStack_2c,2);
              FUN_08869908(auStack_30,2);
            }
          }
          else {
            FUN_0885c538(iVar2,iVar9,0x40);
            FUN_08869908(auStack_30,2);
          }
        }
      }
      else {
        FUN_0885c538(iVar2,iVar5,0x40);
      }
    }
  }
  return;
}

